/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYXPCActivity : NSObject {
    NSObject<OS_xpc_object> * _xpcActivity;
}

@property (nonatomic, copy) NSObject<OS_xpc_object> *criteria;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcActivity;

+ (id)activityWithXPCActivity:(id)arg1;

- (void).cxx_destruct;
- (id)criteria;
- (void)setCriteria:(id)arg1;
- (bool)setState:(long long)arg1;
- (void)setXpcActivity:(id)arg1;
- (long long)state;
- (id)xpcActivity;

@end
