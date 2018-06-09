/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownFieldObjectReference : TSPUnknownField {
    TSPLazyReferenceArray * _strongObjects;
    TSPLazyReferenceArray * _weakObjects;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
