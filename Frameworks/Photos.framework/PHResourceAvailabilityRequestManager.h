/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceAvailabilityRequestManager : NSObject <PHResourceAvailabilityChangeRequestDelegate, PHVideoChoosingAndAvailabilityRequestDelegate> {
    NSMutableDictionary * _requestsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_availabilityRequestDidFinish:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (id)_requestWithTaskIdentifier:(id)arg1;
- (void)_unregisterRequest:(id)arg1;
- (void)_unregisterRequestForTaskIdentifier:(id)arg1;
- (id)init;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(id)arg4;

@end
