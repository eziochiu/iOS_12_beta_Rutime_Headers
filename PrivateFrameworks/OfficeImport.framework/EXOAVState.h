/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXOAVState : OAVReadState {
    EXReadState * mEXReadState;
}

- (id)exState;
- (id)initWithEXReadState:(id)arg1 packagePart:(id)arg2;

@end
