/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPSetLastOpenDateOperation : FPActionOperation {
    NSDate * _date;
    NSArray * _items;
}

- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 date:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end