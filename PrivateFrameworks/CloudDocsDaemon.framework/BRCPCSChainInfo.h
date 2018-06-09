/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPCSChainInfo : NSObject {
    BRFieldCKInfo * _contentCKInfo;
    BRCItemID * _itemID;
    BOOL  _itemType;
    BRCItemID * _parentID;
    BRFieldCKInfo * _structuralCKInfo;
}

@property (nonatomic, readonly) BRFieldCKInfo *contentCKInfo;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BOOL itemType;
@property (nonatomic, readonly) BRCItemID *parentID;
@property (nonatomic, readonly) BRFieldCKInfo *structuralCKInfo;

- (void).cxx_destruct;
- (id)contentCKInfo;
- (id)initWithItemID:(id)arg1 parentID:(id)arg2 structuralCKInfo:(id)arg3 contentCKInfo:(id)arg4 itemType:(BOOL)arg5;
- (id)itemID;
- (BOOL)itemType;
- (id)parentID;
- (id)structuralCKInfo;

@end
