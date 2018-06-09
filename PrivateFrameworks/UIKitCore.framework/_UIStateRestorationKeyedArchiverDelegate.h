/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStateRestorationKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDelegate;

- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;

@end
