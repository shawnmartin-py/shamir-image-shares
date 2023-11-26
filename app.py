from cli.validate_offline import exit_if_online

if __name__ == "__main__":
    exit_if_online()

    from cli.cli_tool import cli
    cli()
