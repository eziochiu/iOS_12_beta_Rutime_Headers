/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUPurchaseBatch : NSObject {
    NSArray * _continuations;
    NSArray * _errors;
    NSArray * _items;
    NSArray * _offers;
    SUPurchaseManager * _purchaseManager;
    bool  _shouldSuspendWhenFinished;
    NSArray * _validPurchases;
}

@property (nonatomic, retain) NSArray *continuations;
@property (nonatomic, retain) NSArray *errors;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic) SUPurchaseManager *purchaseManager;
@property (nonatomic, retain) NSArray *validPurchases;

- (id)_copyModifiedErrorsFromDictionary:(struct __CFDictionary { }*)arg1;
- (id)_copyUniqueErrorsFromErrors:(id)arg1;
- (id)_copyValidPurchasesForItems:(id)arg1;
- (void)_validateItems;
- (id)continuations;
- (id)copyContinuationsForPurchases:(id)arg1;
- (id)copyFilteredItemsFromItems:(id)arg1;
- (void)dealloc;
- (int (*)errorEqualCallback;
- (id)errors;
- (id)everythingFailedErrorForError:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 offers:(id)arg2;
- (id)items;
- (id)mergedErrorForError:(id)arg1 withCount:(long long)arg2;
- (id)offers;
- (id)purchaseManager;
- (void)setContinuations:(id)arg1;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setPurchaseManager:(id)arg1;
- (void)setPurchasesAndContinuationsFromPurchases:(id)arg1;
- (void)setValidPurchases:(id)arg1;
- (id)validPurchases;

@end
