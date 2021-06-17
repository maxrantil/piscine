int rot_13_main(int argc, char **argv);

int    main()
{
	char *argv0[] = {"abc"};
    rot_13_main(1, argv0);
    char *argv1[] = {"My horse is Amazing."};
    rot_13_main(1, argv1);
	char *argv2[] = {"AkjhZ zLKIJz , 23y "};
    rot_13_main(1, argv2);
	char *argv3[] = {"a", "b"};
    rot_13_main(2, argv3);

    return(0);
}
