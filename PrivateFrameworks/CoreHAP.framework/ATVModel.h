/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface ATVModel : NSObject {
    NSDictionary * _atvLUT;
}

@property (retain) NSDictionary *atvLUT;

+ (void)addTuple:(id)arg1 ToLUT:(id)arg2;
+ (unsigned long long)atvStateFromState:(struct BTStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; bool x17; bool x18; bool x19; }*)arg1;

- (void).cxx_destruct;
- (id)atvLUT;
- (id)findTupleForATVState:(unsigned long long)arg1;
- (id)init;
- (void)setAtvLUT:(id)arg1;

@end
