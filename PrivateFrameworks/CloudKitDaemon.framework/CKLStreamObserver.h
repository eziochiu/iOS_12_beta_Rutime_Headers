/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKLStreamObserver : NSObject {
    bool  _colorOutput;
    CKLEventFilter * _filter;
    NSDateFormatter * _formatter;
    NSMutableDictionary * _processNamesByPath;
}

@property (nonatomic) bool colorOutput;
@property (nonatomic, retain) CKLEventFilter *filter;
@property (nonatomic, readonly) NSDateFormatter *formatter;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSMutableDictionary *processNamesByPath;
@property (nonatomic) bool simulatorOnly;

- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1;
- (id)_processNameForPath:(id)arg1;
- (bool)colorOutput;
- (void)eventMatched:(id)arg1;
- (id)filter;
- (void)finish;
- (id)formatter;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (id)processName;
- (id)processNamesByPath;
- (void)setColorOutput:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setProcessNamesByPath:(id)arg1;
- (void)setSimulatorOnly:(bool)arg1;
- (bool)simulatorOnly;

@end