/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecipientGenerator : NSObject {
    NSArray * _searchABPropertyTypes;
}

@property (nonatomic, retain) NSArray *searchABPropertyTypes;

+ (id)sharedRecipientGenerator;

- (void).cxx_destruct;
- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (id)searchABPropertyTypes;
- (void)setSearchABPropertyTypes:(id)arg1;

@end
