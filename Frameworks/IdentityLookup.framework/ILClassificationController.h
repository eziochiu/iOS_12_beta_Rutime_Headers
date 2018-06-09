/* made by EzioChiu
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILClassificationController : NSObject {
    NSExtension * _electedExtension;
    NSArray * _extensions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isClassificationAvailable, nonatomic, readonly) bool classificationAvailable;
@property (nonatomic, copy) NSExtension *electedExtension;
@property (nonatomic, copy) NSArray *extensions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)electedExtensionFromExtensions:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)electedExtension;
- (id)extensions;
- (id)init;
- (bool)isClassificationAvailable;
- (id)queue;
- (void)setElectedExtension:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)updateExtensions:(id)arg1;

@end
