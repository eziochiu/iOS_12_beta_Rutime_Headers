/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDataFetcher : QLItemFetcher {
    NSString * _contentType;
    NSData * _data;
    QLItem * _item;
    NSURL * _temporaryURL;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createTemporaryFileIfNeeded;
- (void)_deleteTempraryFileIfNeeded;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchedContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithItem:(id)arg1 contentType:(id)arg2;
- (id)itemSize;
- (void)loadDataIfNeeded;
- (id)newItemProvider;
- (id)shareableItem;

@end
