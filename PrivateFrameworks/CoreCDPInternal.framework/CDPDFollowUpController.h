/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDFollowUpController : NSObject <CDPDAuthListener> {
    FLFollowUpController * _followUpController;
    CDPDFollowUpFactory * _followUpFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)clearFollowUpWithContext:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)postFollowUpItemForContext:(id)arg1 error:(id*)arg2;
- (void)securityLevelChanged:(bool)arg1;

@end
