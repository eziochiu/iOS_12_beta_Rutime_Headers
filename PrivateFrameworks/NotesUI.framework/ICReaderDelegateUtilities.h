/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICReaderDelegateUtilities : NSObject <_NSReaderDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fileWrapperForURL:(id)arg1;
+ (id)sharedInstance;

- (id)fileWrapperForURL:(id)arg1;

@end
