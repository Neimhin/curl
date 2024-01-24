
# stealthy Encrypted Client Hello

SECH related functions and types are in
`./src/tool_stealthy_ech.h`
and `./src/tool_stealthy_ech.c`, which have been added to `./src/Makefile.inc`.


Neimhin has added two command line options ('--sech', and '--sech-version')
that currently do nothing, but are loaded into the
OperationConfig.
The '--sech' option is a bool, so takes no argument, but also accepts '--no-sech',
and the '--sech-version' takes a string argument which
is parsed to an `sech_version_t` enum, `--sech-version 1`, results
in SECH_VERSION_1 (which is 0), and all other strings
are SECH_VERSION_DEFAULT (which is 1).
