/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBezierLine : NSObject {
    bool  isOutsideToLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  mLower;
    struct CGPoint { 
        double x; 
        double y; 
    }  mUpper;
}

@end
