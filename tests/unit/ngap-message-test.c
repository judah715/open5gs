#include "core/abts.h"

#include "amf/ngap-build.h"

static void ngap_message_test1(abts_case *tc, void *data)
{
}

abts_suite *test_ngap_message(abts_suite *suite)
{
    suite = ADD_SUITE(suite)

    abts_run_test(suite, ngap_message_test1, NULL);

    return suite;
}
