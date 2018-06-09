/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController <SFPasswordPickerRemoteViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)passwordServiceViewControllerName;
+ (id)serviceViewControllerInterface;

- (void)selectedCredential:(id)arg1;

@end
