/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface PCCJob : NSObject {
    NSError * _errObj;
    NSString * _jid;
    NSDate * _lastTouch;
    NSDictionary * _metadata;
    NSDictionary * _options;
    OSALog * _package;
    NSString * _target;
}

@property (readonly) NSString *jid;
@property (readonly) NSDate *lastTouch;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSString *nextFilepath;
@property (readonly) NSDictionary *options;
@property (readonly) id result;
@property (readonly) NSString *target;

- (void).cxx_destruct;
- (id)description;
- (id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3;
- (id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 forFile:(id)arg4;
- (id)jid;
- (id)lastTouch;
- (id)metadata;
- (id)nextFilepath;
- (id)options;
- (void)packageLog:(id)arg1 forRouting:(id)arg2 info:(id)arg3 options:(id)arg4;
- (void)registerResult:(bool)arg1 error:(id)arg2;
- (id)result;
- (id)target;

@end
