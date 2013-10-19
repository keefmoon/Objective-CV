//
//  KMEducationInstitution.h
//  CV
//
//  Created by Keith Moon on 20/10/2013.
//  Copyright (c) 2013 Data Ninjitsu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum KMEducationInstitutionType {
    KMEducationInstitutionTypePreSchool,
    KMEducationInstitutionTypePrimary,
    KMEducationInstitutionTypeSecondary,
    KMEducationInstitutionTypeCollege,
    KMEducationInstitutionTypeUniversity
}KMEducationInstitutionType;

@interface KMEducationInstitution : NSObject

@property (nonatomic, strong) NSString  *name;
@property (nonatomic, strong) NSURL     *website;
@property (nonatomic, assign) KMEducationInstitutionType type;

@end
