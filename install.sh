#!/bin/bash

qmk_path="$HOME/code/qmk_firmware"
qmk_keyboards_path="$HOME/code/qmk_keyboards"

ln -sfn "$qmk_keyboards_path/jj40" "$qmk_path/keyboards/kprepublic/jj40/keymaps/vadimbrodsky"
ln -sfn "$qmk_keyboards_path/lets_split" "$qmk_path/keyboards/lets_split/keymaps/vadimbrodsky"
ln -sfn "$qmk_keyboards_path/ok60" "$qmk_path/keyboards/ok60/keymaps/vadimbrodsky"
ln -sfn "$qmk_keyboards_path/orthodox" "$qmk_path/keyboards/orthodox/keymaps/vadimbrodsky"
ln -sfn "$qmk_keyboards_path/planck" "$qmk_path/keyboards/planck/keymaps/vadimbrodsky"

