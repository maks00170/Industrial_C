import os
import logging
import subprocess


def test_raii_action():
    process = subprocess.Popen(['../bin/main'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = process.communicate()
    exit_code = process.returncode

    assert exit_code == 0, f'Error: C++ binary exited with code {exit_code}'

    expected_output = b'RAIIAction is going to die' 
    assert expected_output in stdout or expected_output in stderr, f'Error: Expected output not found'


if __name__ == '__main__':
    test_raii_action()
    print('All test complete')