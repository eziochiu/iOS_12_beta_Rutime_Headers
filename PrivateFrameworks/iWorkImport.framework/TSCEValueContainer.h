/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEValueContainer : NSObject {
    struct TSCEValue { 
        unsigned long long mBuff[10]; 
        int mType; 
    }  mValue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithValue:(struct TSCEValue { unsigned long long x1[10]; int x2; })arg1;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })value;

@end
