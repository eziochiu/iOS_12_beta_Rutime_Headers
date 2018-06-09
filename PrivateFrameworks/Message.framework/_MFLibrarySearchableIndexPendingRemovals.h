/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFLibrarySearchableIndexPendingRemovals : NSObject {
    NSMutableDictionary * _reasonsByIdentifier;
}

@property (readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *deletedIdentifiers;
@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly) NSArray *purgedIdentifiers;

- (id)_identifiersPassingReasonsTest:(id /* block */)arg1;
- (void)addIdentifiers:(id)arg1 withReasons:(id)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (id)deletedIdentifiers;
- (id)identifiers;
- (id)init;
- (id)purgedIdentifiers;
- (void)removeAllIdentifiers;
- (void)removeIdentifier:(id)arg1;

@end
