/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryUsabilityCriteriaResults : NSObject <PLPersonClusterUsabilityCriteriaResults> {
    NSArray * _unverifiedPersons;
    unsigned long long  _verifiedPersonsCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)countOfUnverifiedPersons;
- (unsigned long long)countOfVerifiedPersons;
- (long long)faceCountOfUnverifiedPersonAtIndex:(unsigned long long)arg1;
- (id)initWithUnverifiedPersons:(id)arg1 verifiedPersonsCount:(unsigned long long)arg2;

@end
