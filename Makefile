all:
	emcc src/worker.c -O3 -s WASM=1 -s "EXPORTED_FUNCTIONS=['_process_micro_task']" --no-entry -o web/worker.wasm
