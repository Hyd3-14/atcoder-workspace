#!/usr/bin/env bash
set -euo pipefail

ROOT="${ATCODER_ROOT:-$(ghq root)/github.com/Hyd3-14/atcoder-workspace}"
LIST="${1:-$ROOT/sets/isct-recommended.tsv}"
TEMPLATE="${HOME}/.config/atcoder-cli-nodejs/cpp/main.cpp"

if ! command -v oj >/dev/null 2>&1; then
  echo "oj が見つからない"
  exit 1
fi

if [ ! -f "$LIST" ]; then
  echo "list not found: $LIST"
  exit 1
fi

if [ ! -f "$TEMPLATE" ]; then
  echo "template not found: $TEMPLATE"
  echo "先に ~/.config/atcoder-cli-nodejs/cpp/main.cpp を用意する"
  exit 1
fi

while IFS=$'\t' read -r section contest task_dir task_id url title; do
  [[ -z "${section:-}" ]] && continue
  [[ "$section" =~ ^# ]] && continue

  dir="$ROOT/$section/$contest/$task_dir"

  echo "==> $section / $contest / $task_dir : $title"
  mkdir -p "$dir"

  if [ ! -f "$dir/main.cpp" ]; then
    cp "$TEMPLATE" "$dir/main.cpp"
  fi

  printf '%s\n' "$contest" > "$dir/.contest-id"
  printf '%s\n' "$task_id" > "$dir/.task-id"
  printf '%s\n' "$url" > "$dir/.task-url"

  cat > "$dir/README.md" <<README
# $title

- Section: $section
- Contest: $contest
- Task: $task_id
- URL: $url
README

  (
    cd "$dir"
    oj download -d test "$url"
  )
done < "$LIST"

cd "$ROOT"
git add .
git commit -m "Import ISCT recommended AtCoder problems" || true
