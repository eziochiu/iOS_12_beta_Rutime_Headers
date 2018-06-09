/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKTableEntriesWithRowSpacer : NSObject <CRKTableEntries> {
    unsigned long long  mIndex;
    <CRKTableEntries> * mOrigin;
    <CRKTableEntry> * mSpacerEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 spacerEntry:(id)arg3;
- (unsigned long long)rowCount;

@end
