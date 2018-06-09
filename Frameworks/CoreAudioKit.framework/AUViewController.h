/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AUViewController : UIViewController <NSExtensionRequestHandling> {
    NSExtensionContext * _context;
}

@property NSExtensionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;

@end
