/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAngleArcPathElement : OADPathElement {
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mAngleLength;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mCenter;
    bool  mConnectedToPrevious;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mSemiaxes;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mStartAngle;
}

- (struct OADAdjustCoord { bool x1; int x2; })angleLength;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })center;
- (bool)connectedToPrevious;
- (id)initWithCenter:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg1 semiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg2 startAngle:(struct OADAdjustCoord { bool x1; int x2; })arg3 angleLength:(struct OADAdjustCoord { bool x1; int x2; })arg4 connectedToPrevious:(bool)arg5;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })semiaxes;
- (struct OADAdjustCoord { bool x1; int x2; })startAngle;

@end
