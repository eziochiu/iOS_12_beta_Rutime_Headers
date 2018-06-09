/* made by EzioChiu.
 */

@protocol _UIKeyboardArbiterLink <NSObject>

@required

- (void)attach:(FBSSceneLayer *)arg1;
- (void)connectWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)createSceneWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)detach:(FBSSceneLayer *)arg1;
- (bool)isAvailable;
- (_UIKeyboardArbiter *)owner;
- (NSString *)serviceName;
- (void)setOwner:(_UIKeyboardArbiter *)arg1;
- (void)updateSceneSettings;

@end
