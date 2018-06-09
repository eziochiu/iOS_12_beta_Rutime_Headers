/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudCreatePushConnectionOperation : CATOperation {
    CKContainer * _container;
    <APSConnectionDelegate> * _delegate;
    APSConnection * mPushConnection;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) <APSConnectionDelegate> *delegate;

+ (id)new;

- (void).cxx_destruct;
- (id)buildPushTopic;
- (id)container;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 container:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (id)pushConnectionForEnvironment:(id)arg1;

@end
