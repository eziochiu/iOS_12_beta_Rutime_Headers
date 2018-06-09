/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKUnitTestRunner : NSObject <IMUnitTestRunnerDelegate> {
    NSFileHandle * _fileHandle;
    IMUnitTestRunner * _runner;
    bool  _shouldWrite;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IMUnitTestRunner *runner;
@property (nonatomic) bool shouldWrite;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dumpResults:(id)arg1;
- (id)fileHandle;
- (void)runUnitTestBundleAtPath:(id)arg1 writeToFile:(bool)arg2;
- (id)runner;
- (void)setFileHandle:(id)arg1;
- (void)setRunner:(id)arg1;
- (void)setShouldWrite:(bool)arg1;
- (bool)shouldWrite;
- (void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2;

@end
