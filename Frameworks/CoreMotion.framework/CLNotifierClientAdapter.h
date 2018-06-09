/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {
    struct CLNotifierClientBase { int (**x1)(); } * _client;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (id)debugDescription;
- (id)init;
- (id)initWithClient:(struct CLNotifierClientBase { int (**x1)(); }*)arg1;
- (void)invalidate;
- (void)onNotification:(int)arg1 withData:(id)arg2;
- (void)setValid:(bool)arg1;
- (bool)valid;

@end
