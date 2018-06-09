/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCJoiningAcceptSession : NSObject {
    NSObject<KCJoiningAcceptCircleDelegate> * _circleDelegate;
    KCSRPServerContext * _context;
    unsigned long long  _dsid;
    NSString * _piggy_uuid;
    int  _piggy_version;
    NSObject<KCJoiningAcceptSecretDelegate> * _secretDelegate;
    KCAESGCMDuplexSession * _session;
    NSData * _startMessage;
    int  _state;
}

@property (readonly) NSObject<KCJoiningAcceptCircleDelegate> *circleDelegate;
@property (readonly) KCSRPServerContext *context;
@property (readonly) unsigned long long dsid;
@property (retain) NSString *piggy_uuid;
@property int piggy_version;
@property (readonly) NSObject<KCJoiningAcceptSecretDelegate> *secretDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property (retain) NSData *startMessage;
@property (readonly) int state;

+ (id)sessionWithInitialMessage:(id)arg1 secretDelegate:(id)arg2 circleDelegate:(id)arg3 dsid:(unsigned long long)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)circleDelegate;
- (id)context;
- (id)copyChallengeMessage:(id*)arg1;
- (id)description;
- (unsigned long long)dsid;
- (id)initWithSecretDelegate:(id)arg1 circleDelegate:(id)arg2 dsid:(unsigned long long)arg3 rng:(struct ccrng_state { int (*x1)(); }*)arg4 error:(id*)arg5;
- (bool)isDone;
- (id)piggy_uuid;
- (int)piggy_version;
- (id)processApplication:(id)arg1 error:(id*)arg2;
- (id)processInitialMessage:(id)arg1 error:(id*)arg2;
- (id)processMessage:(id)arg1 error:(id*)arg2;
- (id)processResponse:(id)arg1 error:(id*)arg2;
- (id)secretDelegate;
- (id)session;
- (void)setPiggy_uuid:(id)arg1;
- (void)setPiggy_version:(int)arg1;
- (void)setStartMessage:(id)arg1;
- (bool)setupSession:(id*)arg1;
- (id)startMessage;
- (int)state;
- (id)stateString;

@end
