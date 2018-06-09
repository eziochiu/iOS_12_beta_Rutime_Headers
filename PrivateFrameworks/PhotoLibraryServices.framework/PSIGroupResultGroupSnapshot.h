/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupResultGroupSnapshot : NSObject {
    short  _category;
    NSString * _contentString;
    unsigned long long  _groupId;
    NSString * _lookupIdentifier;
    NSMutableArray * _matchRanges;
    unsigned long long  _owningGroupId;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) short category;
@property (nonatomic, readonly, copy) NSString *contentString;
@property (nonatomic, readonly) unsigned long long groupId;
@property (nonatomic, readonly, copy) NSString *lookupIdentifier;
@property (nonatomic, readonly, retain) NSArray *matchRanges;
@property (nonatomic, readonly) unsigned long long owningGroupId;
@property (nonatomic, readonly, retain) NSArray *tokens;

- (void)addMatchRange:(id)arg1;
- (void)addToken:(id)arg1;
- (short)category;
- (id)contentString;
- (void)dealloc;
- (unsigned long long)groupId;
- (id)initWithContentString:(id)arg1 token:(id)arg2 category:(short)arg3 lookupIdentifier:(id)arg4 groupId:(unsigned long long)arg5 owningGroupId:(unsigned long long)arg6;
- (id)lookupIdentifier;
- (id)matchRanges;
- (unsigned long long)owningGroupId;
- (id)tokens;

@end
