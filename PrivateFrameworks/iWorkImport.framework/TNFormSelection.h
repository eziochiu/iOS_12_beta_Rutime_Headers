/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNFormSelection : TSKSelection {
    unsigned char  _fieldIndex;
    unsigned short  _recordIndex;
}

@property (nonatomic, readonly) unsigned char fieldIndex;
@property (nonatomic, readonly) unsigned short recordIndex;

+ (Class)archivedSelectionClass;
+ (id)selection;
+ (id)selectionForRecordIndex:(unsigned short)arg1 fieldIndex:(unsigned char)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)fieldIndex;
- (id)initWithRecordIndex:(unsigned short)arg1 fieldIndex:(unsigned char)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned short)recordIndex;

@end
