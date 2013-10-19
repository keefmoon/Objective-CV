//
//  KMSkill.h
//  CV
//
//  Created by Keith Moon on 20/10/2013.
//  Copyright (c) 2013 Data Ninjitsu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum KMSkillLevel {
    KMSkillLevelClueless,
    KMSkillLevelNovice,
    KMSkillLevelIntermediate,
    KMSkillLevelProficent,
    KMSkillLevelAdvanced,
    KMSkillLevelExpert,
    KMSkillLevelGodlike
}KMSkillLevel;

@interface KMSkill : NSObject

@property (nonatomic, strong) NSString      *name;
@property (nonatomic, assign) KMSkillLevel  level;

@end
