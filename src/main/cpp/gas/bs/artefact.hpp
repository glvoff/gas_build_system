#pragma once

#include "config.hpp"

namespace gas{
namespace bs{

/**
 * @brief Артефакт - он же модуль или же то что 
 * нужно получить в ходе выполнения оприеделённых 
 * задач
*/
class artefact: public obj{
private:
    config* _cfg;
public:
    artefact(config* cfg);
    ~artefact() override;
    void execute();
    void load();
};

}
}