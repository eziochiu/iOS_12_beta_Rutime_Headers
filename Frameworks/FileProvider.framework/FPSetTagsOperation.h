/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPSetTagsOperation : FPActionOperation {
    NSArray * _items;
    NSArray * _tagsLists;
}

- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 tagsLists:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end
