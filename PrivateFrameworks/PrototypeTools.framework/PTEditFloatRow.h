/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTEditFloatRow : PTSRow {
    unsigned long long  _precision;
}

@property (nonatomic) unsigned long long precision;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

- (id)between:(double)arg1 and:(double)arg2;
- (id)init;
- (unsigned long long)precision;
- (id)precision:(unsigned long long)arg1;
- (void)setPrecision:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (Class)tableViewCellClass;

@end
