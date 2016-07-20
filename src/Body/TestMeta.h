#ifndef TestMeta_h
#define TestMeta_h

#include <LuniLib.h>
#include <Device/ClientReporter.h>

#include <Frame/TestManager.h>
#include <Frame/DeviceDriverTest.h>
#include <Frame/Logger.h>

class TestMeta : public DeviceDriverTest {
public:
  TestMeta(const char *unitIdentifier);
  void doTest(TestManager *tst, ClientReporter *r, Logger *log);
};

#endif
