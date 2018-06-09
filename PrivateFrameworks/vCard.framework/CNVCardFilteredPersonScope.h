/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardFilteredPersonScope : NSObject {
    NSSet * _blacklist;
    unsigned long long  _filterOptions;
}

@property (readonly) NSSet *blacklist;
@property (readonly) unsigned long long filterOptions;

- (void).cxx_destruct;
- (id)blacklist;
- (unsigned long long)filterOptions;
- (id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2;
- (bool)isEmpty;

@end
