/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsResting;
    double  _angularDamping;
    double  _angularRestingThreshold;
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  _angularVelocity;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _angularVelocityFactor;
    struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_3_1_2; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; struct btVector3 { union { float x_1_2_1[4]; } x_6_1_1; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_27_1_1[3]; } x27; struct btVector3 { union { float x_1_2_1[4]; } x_28_1_1; } x28; } * _body;
    unsigned long long  _categoryBitMask;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _centerOfMassOffset;
    double  _charge;
    unsigned long long  _collisionBitMask;
    unsigned long long  _contactTestBitMask;
    double  _continuousCollisionDetectionThreshold;
    double  _damping;
    bool  _explicitMomentOfInertia;
    double  _friction;
    bool  _ignoreGravity;
    bool  _isDefaultShape;
    double  _linearRestingThreshold;
    double  _mass;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _momentOfInertia;
    SCNNode * _node;
    SCNPhysicsShape * _physicsShape;
    double  _restitution;
    double  _rollingFriction;
    long long  _type;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _velocity;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _velocityFactor;
}

@property (getter=isAffectedByGravity, nonatomic) bool affectedByGravity;
@property (nonatomic) bool allowsResting;
@property (nonatomic) double angularDamping;
@property (nonatomic) double angularRestingThreshold;
@property (nonatomic) struct SCNVector4 { float x1; float x2; float x3; float x4; } angularVelocity;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } angularVelocityFactor;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } centerOfMassOffset;
@property (nonatomic) double charge;
@property (nonatomic) unsigned long long collisionBitMask;
@property (nonatomic) unsigned long long contactTestBitMask;
@property (nonatomic) double continuousCollisionDetectionThreshold;
@property (nonatomic) double damping;
@property (nonatomic) double friction;
@property (nonatomic, readonly) bool isResting;
@property (nonatomic) double linearRestingThreshold;
@property (nonatomic) double mass;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } momentOfInertia;
@property (nonatomic, retain) SCNPhysicsShape *physicsShape;
@property (nonatomic) double restitution;
@property (nonatomic) double rollingFriction;
@property (nonatomic) long long type;
@property (nonatomic) bool usesDefaultMomentOfInertia;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } velocity;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } velocityFactor;

+ (id)bodyWithType:(long long)arg1 shape:(id)arg2;
+ (id)dynamicBody;
+ (id)kinematicBody;
+ (id)staticBody;
+ (bool)supportsSecureCoding;

- (void)_activate;
- (struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_3_1_2; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; struct btVector3 { union { float x_1_2_1[4]; } x_6_1_1; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_27_1_1[3]; } x27; struct btVector3 { union { float x_1_2_1[4]; } x_28_1_1; } x28; }*)_createBody;
- (void)_didDecodeSCNPhysicsBody:(id)arg1;
- (struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_3_1_2; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; struct btVector3 { union { float x_1_2_1[4]; } x_6_1_1; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_27_1_1[3]; } x27; struct btVector3 { union { float x_1_2_1[4]; } x_28_1_1; } x28; }*)_handle;
- (id)_owner;
- (void)_ownerWillDie;
- (void)_removeOwner;
- (void)_setOwner:(id)arg1;
- (struct btCollisionShape { int (**x1)(); int x2; void *x3; }*)_shapeHandleWithShape:(id)arg1 owner:(id)arg2;
- (bool)allowsResting;
- (double)angularDamping;
- (double)angularRestingThreshold;
- (double)angularSleepingThreshold;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })angularVelocity;
- (struct SCNVector3 { float x1; float x2; float x3; })angularVelocityFactor;
- (void)applyForce:(struct SCNVector3 { float x1; float x2; float x3; })arg1 atPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg2 impulse:(bool)arg3;
- (void)applyForce:(struct SCNVector3 { float x1; float x2; float x3; })arg1 impulse:(bool)arg2;
- (void)applyTorque:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 impulse:(bool)arg2;
- (unsigned long long)categoryBitMask;
- (struct SCNVector3 { float x1; float x2; float x3; })centerOfMassOffset;
- (double)charge;
- (void)clearAllForces;
- (unsigned long long)collisionBitMask;
- (unsigned long long)contactTestBitMask;
- (double)continuousCollisionDetection;
- (double)continuousCollisionDetectionThreshold;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)friction;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 shape:(id)arg2;
- (bool)isAffectedByGravity;
- (bool)isResting;
- (double)linearRestingThreshold;
- (double)linearSleepingThreshold;
- (double)mass;
- (struct SCNVector3 { float x1; float x2; float x3; })momentOfInertia;
- (void)moveToPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)moveToTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)physicsShape;
- (void)resetToTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)resetTransform;
- (bool)respondsToCollision;
- (double)restitution;
- (double)rollingFriction;
- (void)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (struct __C3DScene { }*)sceneRef;
- (void)setAffectedByGravity:(bool)arg1;
- (void)setAllowsResting:(bool)arg1;
- (void)setAngularDamping:(double)arg1;
- (void)setAngularRestingThreshold:(double)arg1;
- (void)setAngularSleepingThreshold:(double)arg1;
- (void)setAngularVelocity:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setAngularVelocityFactor:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setCenterOfMassOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setCharge:(double)arg1;
- (void)setCollisionBitMask:(unsigned long long)arg1;
- (void)setContactTestBitMask:(unsigned long long)arg1;
- (void)setContinuousCollisionDetectionThreshold:(double)arg1;
- (void)setDamping:(double)arg1;
- (void)setFriction:(double)arg1;
- (void)setLinearRestingThreshold:(double)arg1;
- (void)setLinearSleepingThreshold:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setMomentOfInertia:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setPhysicsShape:(id)arg1;
- (void)setResting:(bool)arg1;
- (void)setRestitution:(double)arg1;
- (void)setRollingFriction:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUsesDefaultMomentOfInertia:(bool)arg1;
- (void)setVelocity:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setVelocityFactor:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (long long)type;
- (bool)usesDefaultMomentOfInertia;
- (struct SCNVector3 { float x1; float x2; float x3; })velocity;
- (struct SCNVector3 { float x1; float x2; float x3; })velocityFactor;

@end
