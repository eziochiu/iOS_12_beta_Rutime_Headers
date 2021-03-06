/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKMultipleChoiceListFormat : TSKFormat <NSCopying> {
    int  _initialValue;
    unsigned int  _multipleChoiceListFormatID;
    <TSUMultipleChoiceListChoiceProviding> * _popupModel;
}

@property (nonatomic, readonly) int initialValue;
@property (nonatomic, readonly) unsigned int multipleChoiceListFormatID;
@property (nonatomic, readonly) <TSUMultipleChoiceListChoiceProviding> *popupModel;

- (void).cxx_destruct;
- (id)asMultipleChoiceListFormat;
- (unsigned long long)hash;
- (id)initWithInitialValue:(int)arg1 multipleChoiceListFormatID:(unsigned int)arg2 popupModel:(id)arg3;
- (int)initialValue;
- (bool)isEqual:(id)arg1;
- (unsigned int)multipleChoiceListFormatID;
- (id)popupModel;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end
