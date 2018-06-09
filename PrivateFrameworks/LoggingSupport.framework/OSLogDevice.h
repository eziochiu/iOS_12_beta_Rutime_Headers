/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogDevice : NSObject {
    long long  _devType;
    void * _mobDev;
    SimDevice * _simDev;
    NSString * _uid;
}

@property (nonatomic) long long devType;
@property (nonatomic) void*mobDev;
@property (nonatomic, retain) SimDevice *simDev;
@property (nonatomic, retain) NSString *uid;

- (void).cxx_destruct;
- (id)description;
- (long long)devType;
- (id)init;
- (id)initWithMobileDevice:(void*)arg1 andID:(id)arg2;
- (id)initWithSimualatedDevice:(id)arg1;
- (void*)mobDev;
- (void)setDevType:(long long)arg1;
- (void)setMobDev:(void*)arg1;
- (void)setSimDev:(id)arg1;
- (void)setUid:(id)arg1;
- (id)simDev;
- (id)uid;

@end
