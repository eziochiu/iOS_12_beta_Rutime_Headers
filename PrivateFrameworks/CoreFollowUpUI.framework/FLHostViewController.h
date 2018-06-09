/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLHostViewController : _UIRemoteViewController <FLExtensionHostInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
