		diff_from_buffer(&diff,
		diff_from_buffer(&diff,
		diff_from_buffer(&diff,
		diff_from_buffer(&diff,
		diff_from_buffer(&diff, buf.ptr, buf.size));
	cl_git_pass(diff_from_buffer(
	cl_git_pass(diff_from_buffer(
	cl_git_pass(diff_from_buffer(
	cl_git_pass(diff_from_buffer(
	cl_git_pass(diff_from_buffer(&parsed,
	cl_git_pass(diff_from_buffer(&parsed,
void test_diff_parse__eof_nl_missing(void)
{
	const char patch[] =
		"diff --git a/.env b/.env\n"
        "index f89e4c0..7c56eb7 100644\n"
        "--- a/.env\n"
        "+++ b/.env\n"
        "@@ -1 +1 @@\n"
        "-hello=12345\n"
        "+hello=123456\n"
		"\\ No newline at end of file\n";
	git_diff *diff;
	git_patch *ret_patch;
	git_diff_line *line;

	cl_git_pass(diff_from_buffer(&diff, patch, strlen(patch)));
	cl_git_pass(git_patch_from_diff(&ret_patch, diff, 0));

	cl_assert((line = git_array_get(ret_patch->lines, 2)) != NULL);
	cl_assert(line->origin == GIT_DIFF_LINE_DEL_EOFNL);

	git_diff_free(diff);
	git_patch_free(ret_patch);
}

	cl_git_pass(diff_from_buffer(&diff, patch, strlen(patch)));
	cl_git_pass(diff_from_buffer(&diff, patch, strlen(patch)));
	cl_git_pass(diff_from_buffer(&diff, patchbuf.ptr, patchbuf.size));
	cl_git_pass(diff_from_buffer(&diff, text, strlen(text)));
	cl_git_pass(diff_from_buffer(&diff, text, strlen(text)));
	cl_git_pass(diff_from_buffer(&diff, content, strlen(content)));
	cl_git_pass(diff_from_buffer(&diff, content, strlen(content)));
	cl_git_pass(diff_from_buffer(&diff, content, strlen(content)));
	cl_git_pass(diff_from_buffer(&diff, text, strlen(text)));