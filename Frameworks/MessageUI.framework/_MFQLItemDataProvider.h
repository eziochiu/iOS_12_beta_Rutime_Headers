/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider> {
    NSData * _data;
    QLItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) QLItem *item;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)item;
- (id)provideDataForItem:(id)arg1;

@end
