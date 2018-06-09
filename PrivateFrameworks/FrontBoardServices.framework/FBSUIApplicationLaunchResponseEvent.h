/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationLaunchResponseEvent : FBSWorkspaceEvent {
    FBSUIApplicationLaunchResponse * _response;
}

@property (nonatomic, retain) FBSUIApplicationLaunchResponse *response;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;

@end
