while (i < count)
{
    fd = open(*(files + i), O_RDONLY);
    if (fd)
    {
        result = parse_map(fd);
        solve_map(result);
        close(fd);
    }
}
